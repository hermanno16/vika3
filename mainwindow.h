#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "scientist.h"
#include "service.h"

#include <QMainWindow>
using namespace std;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_search_box_textChanged(const QString &arg1);

private:

    void displayAllScientists();
    void displayScientists(vector<Scientist> scientists);

    Ui::MainWindow *ui;
    Service _service;
};

#endif // MAINWINDOW_H
