//
//  RCTConvert+Mapbox.h
//  RCTMGL
//
//  Created by Nick Italiano on 8/23/17.
//  Copyright © 2017 Mapbox Inc. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface RCTMGLUtils: NSObject

+ (CLLocationCoordinate2D)GeoJSONPoint:(id)json;

@end
