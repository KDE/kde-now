/*
 * Copyright (C) 2016  Aditya Dev Sharma <aditya.sharma156696@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef PLUGINSLOADER_H
#define PLUGINSLOADER_H

#include <QtCore/QObject>
#include <QtCore/QVariantMap>

class PluginsLoader : public QObject
{
        Q_OBJECT
    public:
        explicit PluginsLoader(QObject* parent = 0);

    public Q_SLOTS:
        void load();

    private:
        QVariantMap m_map;
};

#endif //PLUGINSLOADER_H