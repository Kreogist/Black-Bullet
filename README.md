Black Bullet
============

Copyright © 2014 Kreogist Dev Team. All rights reserved.

##Menu

* Overview
* Quick Start Guide
* License

##Overview

Black Bullet is a cross-platform runtime read and write database for Project Nerve using JSON.

* Support batch process.
* Support automatically real-time write.

##Quick Start Guide
**void append(const QJsonValue &value);**
Inserts value at the end of the array.

**QJsonValue at(int i) const;**
Returns a QJsonValue representing the value for index i.

**QJsonParseError error() const;**
Returns the last error.

**void flush();**
If there's data need to write to disk, will write all the data to the disk.

**virtual void load();**
When all the data has been read from the disk, KNLibDatabase will call this function to process data.

**void replace(int i, const QJsonValue &value);**
Replaces the item at index position i with value. i must be a valid index position in the array (i.e., 0 <= i < size()).

**QJsonObject row(int i) const;**
Returns a QJsonObject representing the value for index i. The QJsonObject will covert from the QJsonValue at index i.

**void setBatchCount(int batch);**
Set after how many instructions the database should write the cache to the disk.
When you call this function, KNLibDatabase will call the flush() function to write all the current data into the disk.

**void setDatabase(const QString &filePath);**
Set the database file.

**void removeAt(int i);**
Removes the value at index position i. i must be a valid index position in the array (i.e., 0 <= i < size()).

**int size() const;**
Returns the number of values stored in the array.

**QJsonValue takeAt(int i);**
Removes the item at index position i and returns it. i must be a valid index position in the array (i.e., 0 <= i < size()).

##License

Black Bullet is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version.

Black Bullet is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with Black Bullet. If not, see http://www.gnu.org/licenses/.
