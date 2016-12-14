#include "addcomputerdialog.h"
#include "ui_addcomputerdialog.h"
#include <QMessageBox>
#include <iostream>
#include <QLineEdit>
#include <QString>

using namespace std;

addComputerDialog::addComputerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addComputerDialog)
{
    ui->setupUi(this);
}

addComputerDialog::~addComputerDialog()
{
    delete ui;
}
void addComputerDialog::on_computer_Submit_Button_clicked()
{
    //if (Computer_Name_InputBox->text().isEmpty())
    //{
        QMessageBox::about(this, "Error", "No, Name Entered");
    //}
}

void addComputerDialog::on_add_Photo_computer_Button_clicked()
{
    string filePath = QFileDialog::getOpenFileName(
                    this,
                    "Search for images",
                    "",
                    "Image files (*.png *.jpg)"
                    ).toStdString();
        if (filePath.length())
        {
            //user selected some file
            QPixmap pixmap(QString::fromStdString(filePath));

            ui->photo_computer_frame->setPixmap(pixmap);
            ui->photo_computer_frame->setScaledContents(true);

        }
        else
        {
            //user did not select a file
        }
}
