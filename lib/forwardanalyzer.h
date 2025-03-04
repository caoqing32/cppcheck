/*
 * Cppcheck - A tool for static C/C++ code analysis
 * Copyright (C) 2007-2020 Cppcheck team.
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

#ifndef forwardanalyzerH
#define forwardanalyzerH

#include "analyzer.h"

class Settings;
class Token;
template <class T> class ValuePtr;

Analyzer::Result valueFlowGenericForward(Token* start,
        const Token* end,
        const ValuePtr<Analyzer>& a,
        const Settings* settings);

Analyzer::Result valueFlowGenericForward(Token* start, const ValuePtr<Analyzer>& a, const Settings* settings);

#endif
