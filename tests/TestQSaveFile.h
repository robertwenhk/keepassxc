/*
 *  Copyright (C) 2012 Felix Geyer <debfx@fobos.de>
 *  Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies)
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 or (at your option)
 *  version 3 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TESTQSAVEFILE_H
#define TESTQSAVEFILE_H

#include <QtCore/QObject>

class TestQSaveFile : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void transactionalWrite();
    void autoFlush();
    void transactionalWriteNoPermissions();
    void transactionalWriteCanceled();
    void transactionalWriteErrorRenaming();

private:
    QString tmpDir();
};

#endif // TESTQSAVEFILE_H