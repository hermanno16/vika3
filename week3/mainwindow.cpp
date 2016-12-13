#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QString>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    displayAllScientists();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayAllScientists()
{
    vector<Scientist> scientists = _service.getAllScientistsAtoZ();
    displayScientists(scientists);

}

void MainWindow::displayScientists(vector<Scientist> scientists)
{
    ui->list_scientists->clear();

    for(unsigned int i = 0; i < scientists.size(); i++)
    {
        Scientist currentScientist = scientists[i];

        ui->list_scientists->addItem(QString::fromStdString(currentScientist.getName()));


    }

}

void MainWindow::on_search_box_textChanged(const QString &arg1)
{
    string userInput = ui->search_box->text().toStdString();

    vector<Scientist> scientists = _service.searchForScientistsByName(userInput);
    displayScientists(scientists);
}
