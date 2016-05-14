#ifndef EESTUDIO_H
#define EESTUDIO_H

#include <QWidget>

class QGridLayout;
class QGridLayout;
class QLabel;
class QPushButton;
class QLineEdit;

class EEStudio : public QWidget
{
    Q_OBJECT

public:
    explicit EEStudio(QWidget *parent = 0);
    ~EEStudio();

private:
    __InitUi();

};

#endif // EESTUDIO_H
