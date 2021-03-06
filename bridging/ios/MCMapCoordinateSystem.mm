// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from coordinate_system.djinni

#import "MCMapCoordinateSystem.h"


@implementation MCMapCoordinateSystem

- (nonnull instancetype)initWithIdentifier:(nonnull NSString *)identifier
                                    bounds:(nonnull MCRectCoord *)bounds
                   unitToScreenMeterFactor:(float)unitToScreenMeterFactor
{
    if (self = [super init]) {
        _identifier = [identifier copy];
        _bounds = bounds;
        _unitToScreenMeterFactor = unitToScreenMeterFactor;
    }
    return self;
}

+ (nonnull instancetype)mapCoordinateSystemWithIdentifier:(nonnull NSString *)identifier
                                                   bounds:(nonnull MCRectCoord *)bounds
                                  unitToScreenMeterFactor:(float)unitToScreenMeterFactor
{
    return [(MCMapCoordinateSystem*)[self alloc] initWithIdentifier:identifier
                                                             bounds:bounds
                                            unitToScreenMeterFactor:unitToScreenMeterFactor];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p identifier:%@ bounds:%@ unitToScreenMeterFactor:%@>", self.class, (void *)self, self.identifier, self.bounds, @(self.unitToScreenMeterFactor)];
}

@end
