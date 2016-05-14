#ifndef EESTUDIO_H
#define EESTUDIO_H

#include <QWidget>

class QGridLayout;
class QLabel;
class QPushButton;
class QLineEdit;
class QComboBox;

class EEStudio : public QWidget
{
    Q_OBJECT

public:
    explicit EEStudio(QWidget *parent = 0);
    ~EEStudio();

private:
    __InitUi();

    QGridLayout m_gl;
    QLabel m_lComNum;
    QLabel m_lBaudrate;
    QLabel m_lSendText;
    QLabel m_lRecvText;
    QPushButton m_pbSend;
    QLineEdit m_leSendText;
    QComboBox m_cbCom;
    QComboBox m_cbBaudrate;

};

#endif // EESTUDIO_H
