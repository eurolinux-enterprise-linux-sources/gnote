/*
 * gnote
 *
 * Copyright (C) 2011 Aurimas Cernius
 * Copyright (C) 2009 Hubert Figuiere
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include "dbus/remotecontrolclient.hpp"

namespace gnote {



  RemoteControlClient::RemoteControlClient(const Glib::RefPtr<Gio::DBus::Connection> & connection,
                                           const char *path, const char *name, const char *interface_name,
                                           const Glib::RefPtr<Gio::DBus::InterfaceInfo> & gnote_interface)
    : RemoteControl_proxy(connection, name, path, interface_name, gnote_interface)
  {
  }

}


