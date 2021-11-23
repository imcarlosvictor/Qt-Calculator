#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->user_input = "";
    this->equation = "";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::classify_data(int val)
{
    std::string val_to_string = std::to_string(val);
    this->user_input += val_to_string;
    MainWindow::display_input();
}

void MainWindow::classify_data(std::string val)
{
    // Append multi-digit number to equation then update equation field
    this->equation += this->user_input;
    MainWindow::display_equation();
    // Assign operator to user_input and display to input field before appending to the equation
    this->user_input = val;
    MainWindow::display_input();
    // Show new equation with the operator
    this->equation += this->user_input;
    MainWindow::display_equation();
    // Clear the user_input for next integer
    this->user_input = "";
}

void MainWindow::display_input()
{
    ui->field_inputs->setText(QString::fromStdString(this->user_input));
}

void MainWindow::display_equation()
{
    ui->field_equation->setText(QString::fromStdString(this->equation));
}

void MainWindow::on_btn_0_clicked()
{
    MainWindow::classify_data(0);
}

void MainWindow::on_btn_1_clicked()
{
    MainWindow::classify_data(1);
}

void MainWindow::on_btn_2_clicked()
{
    MainWindow::classify_data(2);
}

void MainWindow::on_btn_3_clicked()
{
    MainWindow::classify_data(3);
}

void MainWindow::on_btn_4_clicked()
{
    MainWindow::classify_data(4);
}

void MainWindow::on_btn_5_clicked()
{
    MainWindow::classify_data(5);
}

void MainWindow::on_btn_6_clicked()
{
    MainWindow::classify_data(6);
}

void MainWindow::on_btn_7_clicked()
{
    MainWindow::classify_data(7);
}

void MainWindow::on_btn_8_clicked()
{
    MainWindow::classify_data(8);
}

void MainWindow::on_btn_9_clicked()
{
    MainWindow::classify_data(9);
}

void MainWindow::on_btn_add_clicked()
{
    MainWindow::classify_data("+");
}

void MainWindow::on_btn_subtract_clicked()
{
    MainWindow::classify_data("-");
}

void MainWindow::on_btn_multiply_clicked()
{
    MainWindow::classify_data("*");
}

void MainWindow::on_btn_divide_clicked()
{
    MainWindow::classify_data("/");
}

void MainWindow::on_btn_equals_clicked()
{
    MainWindow::classify_data("=");
}

void MainWindow::on_btn_clear_clicked()
{
    this->equation = "";
    this->user_input = "";
    MainWindow::display_equation();
    MainWindow::display_input();
}

void MainWindow::on_btn_delete_clicked()
{
    int size = this->user_input.size() - 1;
    this->user_input.erase(this->user_input.begin() + size);
    MainWindow::display_input();
}
