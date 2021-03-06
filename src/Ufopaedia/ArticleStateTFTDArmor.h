/*
 * Copyright 2010-2015 OpenXcom Developers.
 *
 * This file is part of OpenXcom.
 *
 * OpenXcom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenXcom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenXcom.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef OPENXCOM_ARTICLESTATETFTDARMOR_H
#define OPENXCOM_ARTICLESTATETFTDARMOR_H

#include "ArticleStateTFTD.h"

namespace OpenXcom
{
	class TextList;
	class ArticleDefinitionTFTD;

	class ArticleStateTFTDArmor : public ArticleStateTFTD
	{
	public:
		ArticleStateTFTDArmor(ArticleDefinitionTFTD *defs);
		virtual ~ArticleStateTFTDArmor();

	protected:
		void addStat(const std::string &label, int stat, bool plus = false);
		void addStat(const std::string &label, const std::wstring &stat);

		int _row;
		TextList *_lstInfo;
	};
}

#endif
