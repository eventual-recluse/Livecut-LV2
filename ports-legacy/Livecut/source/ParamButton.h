/*
 This file is part of Livecut
 Copyright 2003 by Remy Muller.
 
 Livecut can be redistributed and/or modified under the terms of the
 GNU General Public License, as published by the Free Software Foundation;
 either version 2 of the License, or (at your option) any later version.
 
 Livecut is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with Livecut; if not, visit www.gnu.org/licenses or write to the
 Free Software Foundation, Inc., 59 Temple Place, Suite 330, 
 Boston, MA 02111-1307 USA
 */

#ifndef PARAM_BUTTON_H
#define PARAM_BUTTON_H

#include "JuceHeader.h"
#include "Control.h"

class ParamButton : public TextButton, public Control
{
public:
  ParamButton(AudioProcessor &effect, int paramId);
  ~ParamButton();
  
  virtual void refresh();  
  virtual void clicked();  
};

#endif
