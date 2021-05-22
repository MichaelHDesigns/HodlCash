// Copyright (c) 2019 The HodlCash developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLHODLWIDGET_H
#define COINCONTROLHODLWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlPivWidget;
}

class CoinControlPivWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlPivWidget(QWidget *parent = nullptr);
    ~CoinControlPivWidget();

private:
    Ui::CoinControlPivWidget *ui;
};

#endif // COINCONTROLHODLWIDGET_H
