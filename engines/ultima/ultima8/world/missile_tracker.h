/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
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
 *
 */

#ifndef ULTIMA8_WORLD_MISSILETRACKER_H
#define ULTIMA8_WORLD_MISSILETRACKER_H

namespace Ultima {
namespace Ultima8 {

class Item;

class MissileTracker {
public:
	MissileTracker(const Item *item, ObjId owner, int32 sx, int32 sy, int32 sz,
	               int32 tx, int32 ty, int32 tz,
	               int32 speed, int32 gravity);
	MissileTracker(const Item *item, ObjId owner, int32 tx, int32 ty, int32 tz,
	               int32 speed, int32 gravity);
	~MissileTracker();

	bool isPathClear() const;

	void launchItem();

protected:
	void init(int32 sx, int32 sy, int32 sz, int32 speed);

private:
	ObjId _objId, _owner;
	int32 _destX, _destY, _destZ;
	int32 _speedX, _speedY, _speedZ;
	int32 _gravity;
	int _frames;
};

} // End of namespace Ultima8
} // End of namespace Ultima

#endif
