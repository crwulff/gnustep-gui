/** <title>NSTrackingArea</title>

   <abstract>Hang on to tracking area info</abstract>

   Copyright <copy>(C) 1996 Free Software Foundation, Inc.</copy>

   Author: Chris Wulff <crwulff@gmail.com>
   Date: August 2013

   This file is part of the GNUstep GUI Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; see the file COPYING.LIB.
   If not, see <http://www.gnu.org/licenses/> or write to the 
   Free Software Foundation, 51 Franklin Street, Fifth Floor, 
   Boston, MA 02110-1301, USA.
*/

#ifndef _GNUstep_H_NSTrackingArea
#define _GNUstep_H_NSTrackingArea
#import <Foundation/NSObject.h>
#import <Foundation/NSObjCRuntime.h>
#import <Foundation/NSGeometry.h>


@class NSDictionary;

enum {
    NSTrackingMouseEnteredAndExited     = 0x01,
    NSTrackingMouseMoved                = 0x02,
    NSTrackingCursorUpdate 		= 0x04,
};

enum {
    NSTrackingActiveWhenFirstResponder 	= 0x10,
    NSTrackingActiveInKeyWindow         = 0x20,
    NSTrackingActiveInActiveApp 	= 0x40,
    NSTrackingActiveAlways 		= 0x80,
};
    
enum {
    NSTrackingAssumeInside              = 0x100,
    NSTrackingInVisibleRect             = 0x200,
    NSTrackingEnabledDuringMouseDrag    = 0x400
}; 

typedef NSUInteger NSTrackingAreaOptions;

@interface NSTrackingArea : NSObject <NSCopying, NSCoding>
{
@private
  NSRect                _rect;
  __weak id             _owner;
  NSDictionary         *_userInfo;
  NSTrackingAreaOptions _options;
  NSInteger             _tag;
}

- (id) initWithRect: (NSRect)rect
            options: (NSTrackingAreaOptions)options
              owner: (id)owner
           userInfo: (NSDictionary*)userInfo;

- (NSRect) rect;
- (NSTrackingAreaOptions) options;
- (id) owner;
- (NSDictionary*) userInfo;
- (NSInteger) tag;
- (void) setTag: (NSInteger)tag;
@end

#endif // _GNUstep_H_NSTrackingArea
