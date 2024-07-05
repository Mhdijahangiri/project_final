#include "question_of_player_to_survival_mode.h"
#include "class_information_of_question.h"
#include "ui_question_of_player_to_survival_mode.h"
#include "QMovie"

question_of_player_to_survival_mode::question_of_player_to_survival_mode(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::question_of_player_to_survival_mode)
{
    ui->setupUi(this);
    sec = 15;
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(set_time_in_window()));
    timer->start(1000);
    QMovie *gif = new QMovie(":/new/prefix1/Resource/colak.gif");
    ui->label_colak->setMovie(gif);
    gif->start();

}

question_of_player_to_survival_mode::~question_of_player_to_survival_mode()
{
    delete ui;
}
