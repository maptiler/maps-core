// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

#import "MCRenderPassConfig.h"
#import "MCRenderingContextInterface.h"
#import <Foundation/Foundation.h>


@protocol MCGraphicsObjectInterface

/** Returns true, if graphics object is ready to be drawn */
- (BOOL)isReady;

/** Ensure calling on graphics thread */
- (void)setup:(nullable id<MCRenderingContextInterface>)context;

/** Clear graphics object and invalidate isReady */
- (void)clear;

/** Render the graphics object; ensure calling on graphics thread */
- (void)render:(nullable id<MCRenderingContextInterface>)context
    renderPass:(nonnull MCRenderPassConfig *)renderPass
     mvpMatrix:(int64_t)mvpMatrix;

@end