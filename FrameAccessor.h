//
//  FrameAccessor.h
//  FrameAccessor
//


#import "ViewFrameAccessor.h"

#define commonDeviceHeight [UIScreen mainScreen].bounds.size.height
#define commonDeviceWidth  [UIScreen mainScreen].bounds.size.width

#if (TARGET_IPHONE_SIMULATOR || TARGET_OS_IPHONE)
    #import "ScrollViewFrameAccessor.h"

#endif
