#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QString>
#include "addscientistdialog.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    displayAllScientists();

    ui->dropdown_what_to_look_at->addItem(" Scientists");
    ui->dropdown_what_to_look_at->addItem(" Computers");
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
    ui->scientist_table->setColumnCount(5);
    ui->scientist_table->setColumnWidth(1, this->width()/3);
    ui->scientist_table->setColumnWidth(2, this->width()/6);
    ui->scientist_table->setColumnWidth(3, this->width()/6);
    ui->scientist_table->setColumnWidth(4, this->width()/6);

    for(unsigned int row = 0; row < scientists.size(); row++)
    {
        Scientist currentScientist = scientists[row];

        QString id = QString::number(currentScientist.getID());
        QString name = QString::fromStdString(currentScientist.getName());
        QString gender = QString::fromStdString(currentScientist.getGender());
        QString yearofbirth = QString::number(currentScientist.getYearOfBirth());
        QString yearofdeath = QString::fromStdString(currentScientist.getYearOfDeath());

        ui->scientist_table->setItem(row, 0, new QTableWidgetItem(id));
        ui->scientist_table->setItem(row, 1, new QTableWidgetItem(name));
        ui->scientist_table->setItem(row, 2, new QTableWidgetItem(gender));
        ui->scientist_table->setItem(row, 3, new QTableWidgetItem(yearofbirth));
        ui->scientist_table->setItem(row, 4, new QTableWidgetItem(yearofdeath));
    }
}
void MainWindow::on_row_clicked()
{
    //TODO -- klikka á nafn á listanum, fá upp infoið
}
void MainWindow::on_search_box_textChanged()
{
    string userInput = ui->search_box->text().toStdString();

    vector<Scientist> scientists = _service.searchForScientists(userInput);
    displayScientists(scientists);
}

void MainWindow::on_pushButton_clicked()
{
    /*
    AddScientistDialog addStudentDialog;
    addStudentDialog.exec();
    */
}

void MainWindow::on_button_add_scientist_clicked()
{
   AddScientistDialog addScientistDialog;

   int addScientistReturnValue = addScientistDialog.exec();
}
void MainWindow::on_button_scientist_info_clicked()
{
   /*
  AddScientistDialog addScientistDialog;

  int scientistInfoReturnValue = addScientistDialog.exec();
    */
}

void MainWindow::on_dropdown_what_to_look_at_currentTextChanged(const QString &arg1)
{


}
