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

#ifndef FLIGHTRESERVATION_H
#define FLIGHTRESERVATION_H

#include <QtCore/QObject>
#include <QtCore/QString>
#include <QtCore/QDateTime>
#include <QtCore/QVariantMap>

class FlightReservation : public QObject
{
        Q_OBJECT
        Q_PROPERTY(QString reservationNumber READ reservationNumber)
        Q_PROPERTY(QString name READ name)
        Q_PROPERTY(QString flight READ flight)
        Q_PROPERTY(QString departureAirportName READ departureAirportName)
        Q_PROPERTY(QString departureAirportCode READ departureAirportCode)
        Q_PROPERTY(QString departureDate READ departureDate)
        Q_PROPERTY(QString departureTime READ departureTime)
        Q_PROPERTY(QString arrivalAirportName READ arrivalAirportName)
        Q_PROPERTY(QString arrivalAirportCode READ arrivalAirportCode)
        Q_PROPERTY(QString arrivalDate READ arrivalDate)
        Q_PROPERTY(QString arrivalTime READ arrivalTime)

    public:
        explicit FlightReservation(QObject* parent = 0);
        QString reservationNumber() const;
        QString name() const;
        QString flight() const;
        QString departureAirportName() const;
        QString departureAirportCode() const;
        QString departureDate() const;
        QString departureTime() const;
        QString arrivalAirportName() const;
        QString arrivalAirportCode() const;
        QString arrivalDate() const;
        QString arrivalTime() const;

    public Q_SLOTS:
        void setMap(QVariantMap map);

    private:
        QVariantMap m_map;
};

#endif //FLIGHTRESERVATION_H
