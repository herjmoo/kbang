/***************************************************************************
 *   Copyright (C) 2008 by MacJariel                                       *
 *   echo "badmailet@gbalt.dob" | tr "edibmlt" "ecrmjil"                   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef CONNECTTOSERVERDIALOG_H
#define CONNECTTOSERVERDIALOG_H

#include <QDialog>
#include <ui_connecttoserverdialog.h>

/**
 * @author MacJariel <echo "badmailet@gbalt.dob" | tr "edibmlt" "ecrmjil">
 */
class ConnectToServerDialog : public QDialog, public Ui::ConnectToServerDialog
{
Q_OBJECT
public:
    ConnectToServerDialog(QWidget *parent = 0);
    ~ConnectToServerDialog();
    
private slots:
    void on_mp_buttonSaveFavorite_clicked();
    void on_mp_favoriteList_itemClicked(QTreeWidgetItem * item, int column);
    void on_mp_favoriteList_itemDoubleClicked(QTreeWidgetItem * item, int column);
    void on_mp_connectButton_clicked();
    void setConnectButtonStatus();
    
signals:
    void connectToServer(QString serverAddress, int serverPort, QString nickname);
    
};

#endif
