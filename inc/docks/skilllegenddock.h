/*
Dwarf Therapist
Copyright (c) 2009 Trey Stout (chmod)

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
#ifndef SKILL_LEGEND_DOCK_H
#define SKILL_LEGEND_DOCK_H

#include "basedock.h"
#include "uberdelegate.h"

class SkillLegendDock : public BaseDock {
	Q_OBJECT
public:
	SkillLegendDock(QWidget *parent = 0, Qt::WindowFlags flags = 0);

	public slots:		
        void set_SDM(int idx);

signals:
	void change_skill_drawing_method(const UberDelegate::SKILL_DRAWING_METHOD&);

private:
    UberDelegate::SKILL_DRAWING_METHOD m_current_method;

};

#endif
