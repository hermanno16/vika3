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
    ui->scientist_table->clearContents();
    ui->scientist_table->setRowCount(scientists.size());
    ui->scientist_table->setColumnHidden(0, true);



    for(unsigned int row = 0; row < scientists.size(); row++)
    {
        Scientist currentScientist = scientists[row];

        QString id = QString::number(currentScientist.getID());
        QString name = QString::fromStdString(currentScientist.getName());
        QString gender = QString::fromStdString(currentScientist.getGender());
        QString yearofbirth = QString::number(currentScientist.getYearOfBirth());
        QString yearofdeath = QString::number(currentScientist.getYearOfDeath());


        if(yearofdeath == "0")
        {
            yearofdeath = "N/A";
        }

        ui->scientist_table->setItem(row, 0, new QTableWidgetItem(id));
        ui->scientist_table->setItem(row, 1, new QTableWidgetItem(name));
        ui->scientist_table->setItem(row, 2, new QTableWidgetItem(gender));
        ui->scientist_table->setItem(row, 3, new QTableWidgetItem(yearofbirth));
        ui->scientist_table->setItem(row, 4, new QTableWidgetItem(yearofdeath));
    }
}

void MainWindow::on_search_box_textChanged()
{
    string userInput = ui->search_box->text().toStdString();

    vector<Scientist> scientists = _service.searchForScientistsByName(userInput);
    displayScientists(scientists);
}
