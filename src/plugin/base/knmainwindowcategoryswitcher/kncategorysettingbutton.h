/*
 * Copyright (C) Kreogist Dev Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */
#ifndef KNCATEGORYSETTINGBUTTON_H
#define KNCATEGORYSETTINGBUTTON_H

#include "knabstractcategorybutton.h"

class QPropertyAnimation;
class KNCategorySettingButton : public KNAbstractCategoryButton
{
    Q_OBJECT
public:
    explicit KNCategorySettingButton(QWidget *parent = 0);

signals:

public slots:
    void startInAnime();
    void startOutAnime();

protected:
    void startMouseInAnime();
    void startMouseOutAnime();
    void startMouseDownAnime();
    void startMouseUpAnime();

private:
    void initialGeometryAnime(QPropertyAnimation *anime);
    inline void stopSlideAnimation();
    inline QRect generateOut();
    inline QRect generateIn();
    QPropertyAnimation *m_slideIn, *m_slideOut;
};

#endif // KNCATEGORYSETTINGBUTTON_H
