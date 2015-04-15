/*
 * This file Copyright (C) 2012-2014 Mnemosyne LLC
 *
 * It may be used under the GNU GPL versions 2 or 3
 * or any future license endorsed by Mnemosyne LLC.
 *
 * $Id: dbus-adaptor.cc 14394 2014-12-21 23:49:39Z mikedld $
 */

#include "add-data.h"
#include "app.h"
#include "dbus-adaptor.h"

TrDBusAdaptor::TrDBusAdaptor (MyApp* app):
  QDBusAbstractAdaptor (app),
  myApp (app)
{
}

bool
TrDBusAdaptor::PresentWindow ()
{
  myApp->raise ();
  return true;
}

bool
TrDBusAdaptor::AddMetainfo (const QString& key)
{
  AddData addme (key);

  if (addme.type != addme.NONE)
    myApp->addTorrent (addme);

  return true;
}
