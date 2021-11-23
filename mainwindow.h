#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <iostream>
#include <typeinfo>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void classify_data(int);

    void classify_data(std::string);

    void display_input();

    void display_equation();

    void on_btn_0_clicked();

    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_add_clicked();

    void on_btn_subtract_clicked();

    void on_btn_multiply_clicked();

    void on_btn_divide_clicked();

    void on_btn_equals_clicked();

    void on_btn_clear_clicked();

    void on_btn_delete_clicked();


private:
    Ui::MainWindow *ui;
    std::string user_input;
    std::string equation;

};
#endif // MAINWINDOW_H
