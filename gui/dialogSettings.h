/*
     OpenDCP: Builds Digital Cinema Packages
     Copyright (c) 2010-2012 Terrence Meiczinger, All Rights Reserved

     This program is free software: you can redistribute it and/or modify
     it under the terms of the GNU General Public License as published by
     the Free Software Foundation, either version 3 of the License, or
     (at your option) any later version.

     This program is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
     GNU General Public License for more details.

     You should have received a copy of the GNU General Public License
     along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DIALOGSETTINGS_H
#define DIALOGSETTINGS_H 

#include <QSettings>
#include <QDir>
#include "ui_dialogSettings.h"
#include "translator.h"

class DialogSettings : public QDialog, private Ui::DialogSettings
{
    Q_OBJECT

public:
    DialogSettings(QWidget *parent = 0);

private:
    void setLanguage();
    void setOverwriteMode();
    void load();

    Translator translator;

private slots:
    void save();

};

#endif // DIALOGSETTINGS_H
