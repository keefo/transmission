/*
 * This file Copyright (C) 2010-2014 Mnemosyne LLC
 *
 * It may be used under the GNU GPL versions 2 or 3
 * or any future license endorsed by Mnemosyne LLC.
 *
 * $Id: about.h 14398 2014-12-25 19:39:45Z mikedld $
 */

#ifndef ABOUT_DIALOG_H
#define ABOUT_DIALOG_H

#include <QDialog>

#include "ui_about.h"

class AboutDialog: public QDialog
{
    Q_OBJECT

  public:
    AboutDialog (QWidget * parent = 0);
    ~AboutDialog () {}

  public slots:
    void showCredits ();

  private:
    QDialog * myLicenseDialog;
    Ui::AboutDialog ui;
};

#endif
