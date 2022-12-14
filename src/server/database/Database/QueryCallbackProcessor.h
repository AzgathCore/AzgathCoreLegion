/*
 * Copyright 2023 AzgathCore
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef QueryCallbackProcessor_h__
#define QueryCallbackProcessor_h__

#include "Define.h"
#include <vector>

class QueryCallback;

class TC_DATABASE_API QueryCallbackProcessor
{
public:
    QueryCallbackProcessor();
    ~QueryCallbackProcessor();

    void AddQuery(QueryCallback&& query);
    void ProcessReadyQueries();

private:
    QueryCallbackProcessor(QueryCallbackProcessor const&) = delete;
    QueryCallbackProcessor& operator=(QueryCallbackProcessor const&) = delete;

    std::vector<QueryCallback> _callbacks;
};

#endif // QueryCallbackProcessor_h__
