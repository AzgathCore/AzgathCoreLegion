/*
 * Copyright (C) 2012-2014 Arctium Emulation <http://arctium.org>
 * Copyright 2023 AzgathCore
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

#ifndef CONNECTION_PATCHER_PATTERNS_MAC_HPP
#define CONNECTION_PATCHER_PATTERNS_MAC_HPP

#include <vector>

namespace Connection_Patcher
{
    namespace Patterns
    {
        struct Mac
        {
            static std::vector<unsigned char> LauncherLoginParametersLocation() { return { 'n','e','t','.','b','a','t','t','l','e',0 }; }
        };
    }
}

#endif
