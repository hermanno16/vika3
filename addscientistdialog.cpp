#include "addscientistdialog.h"
#include "ui_addscientistdialog.h"

AddScientistDialog::AddScientistDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddScientistDialog)
{
    ui->setupUi(this);
}

AddScientistDialog::~AddScientistDialog()
{
    delete ui;
}

void AddScientistDialog::on_add_Photo_Button_clicked()
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

            ui->photo_scientist_frame->setPixmap(pixmap);
            ui->photo_scientist_frame->setScaledContents(true);

        }
        else
        {
            //user did not select a file
        }
}
