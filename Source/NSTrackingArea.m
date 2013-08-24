
#import <AppKit/NSTrackingArea.h>

@implementation NSTrackingArea
- (id) initWithRect: (NSRect)rect
            options: (NSTrackingAreaOptions)options
              owner: (id)owner
           userInfo: (NSDictionary*)userInfo
{
  _rect = rect;
  _owner = owner;
  _options = options;
  _userInfo = userInfo;
}

- (NSRect) rect
{
  return _rect;
}

- (NSTrackingAreaOptions) options
{
  return _options;
}

- (id) owner
{
  return _owner;
}

- (NSDictionary*) userInfo
{
  return _userInfo;
}

- (NSInteger) tag
{
  return _tag;
}

- (void) setTag: (NSInteger)tag
{
  _tag = tag;
}
@end
