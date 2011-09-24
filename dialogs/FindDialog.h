/**********************************************************************
* File:        FindDialog.h
* Description: Find Dialog
* Author:      Zdenko Podobny
* Created:     2011-09-23
*
* (C) Copyright 2011, Zdenko Podobny
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**    http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*
**********************************************************************/

#ifndef DIALOGS_FINDDIALOG_H_
#define DIALOGS_FINDDIALOG_H_

#include <QtGui/QPushButton>
#include <QtGui/QDialog>

#include "ui_FindDialog.h"

class FindDialog : public QDialog, public Ui::Find {
  Q_OBJECT

  public:
    explicit FindDialog(QWidget* parent = 0);

  signals:
    void findNext(const QString &smbl, Qt::CaseSensitivity mc);
    void findPrev(const QString &smbl, Qt::CaseSensitivity mc);

  private:
    QPushButton *findNextButton;
    QPushButton *findPrevButton;
    QPushButton *closeButton;

  private slots:
    void on_lineEdit_textChanged();
    void findNext();
    void findPrev();
};


#endif  // DIALOGS_FINDDIALOG_H_