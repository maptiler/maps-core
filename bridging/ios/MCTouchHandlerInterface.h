// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from touch_handler.djinni

#import "MCTouchEvent.h"
#import <Foundation/Foundation.h>
@class MCTouchInterface;


@protocol MCTouchHandlerInterface

- (void)onTouchEvent:(nonnull MCTouchEvent *)touchEvent;

- (void)addListener:(nullable MCTouchInterface *)listener;

- (void)removeListener:(nullable MCTouchInterface *)listener;

@end
