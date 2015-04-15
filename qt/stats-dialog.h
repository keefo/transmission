/*
 * This file Copyright (C) 2009-2014 Mnemosyne LLC
 *
 * It may be used under the GNU GPL versions 2 or 3
 * or any future license endorsed by Mnemosyne LLC.
 *
 * $Id: stats-dialog.h 14391 2014-12-21 13:57:15Z mikedld $
 */

#ifndef STATS_DIALOG_H
#define STATS_DIALOG_H

#include <QDialog>

#include "ui_stats-dialog.h"

class Session;
class QTimer;

class StatsDialog: public QDialog
{
    Q_OBJECT

  private slots:
    void updateStats ();

  public:
    StatsDialog (Session&, QWidget * parent = 0);
    ~StatsDialog ();
    virtual void setVisible (bool visible);

  private:
    Session & mySession;
    QTimer * myTimer;
    Ui::StatsDialog ui;
};

#endif
