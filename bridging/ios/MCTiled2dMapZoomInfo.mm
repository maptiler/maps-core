// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tiled_layer.djinni

#import "MCTiled2dMapZoomInfo.h"


@implementation MCTiled2dMapZoomInfo

- (nonnull instancetype)initWithZoomLevelScaleFactor:(float)zoomLevelScaleFactor
                               numDrawPreviousLayers:(int32_t)numDrawPreviousLayers
{
    if (self = [super init]) {
        _zoomLevelScaleFactor = zoomLevelScaleFactor;
        _numDrawPreviousLayers = numDrawPreviousLayers;
    }
    return self;
}

+ (nonnull instancetype)tiled2dMapZoomInfoWithZoomLevelScaleFactor:(float)zoomLevelScaleFactor
                                             numDrawPreviousLayers:(int32_t)numDrawPreviousLayers
{
    return [(MCTiled2dMapZoomInfo*)[self alloc] initWithZoomLevelScaleFactor:zoomLevelScaleFactor
                                                       numDrawPreviousLayers:numDrawPreviousLayers];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p zoomLevelScaleFactor:%@ numDrawPreviousLayers:%@>", self.class, (void *)self, @(self.zoomLevelScaleFactor), @(self.numDrawPreviousLayers)];
}

@end
