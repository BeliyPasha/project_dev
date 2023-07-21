#ifndef MAINWINDOWPROJECT_DEV_H
#define MAINWINDOWPROJECT_DEV_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowProject_dev; }
QT_END_NAMESPACE

class MainWindowProject_dev : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowProject_dev(QWidget *parent = nullptr);
    ~MainWindowProject_dev();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindowProject_dev *ui;
};
#endif // MAINWINDOWPROJECT_DEV_H
