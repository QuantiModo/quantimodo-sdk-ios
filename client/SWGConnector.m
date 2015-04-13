#import "SWGConnector.h"

@implementation SWGConnector
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"id": @"_id", @"name": @"name", @"displayName": @"displayName", @"image": @"image", @"getItUrl": @"getItUrl", @"connected": @"connected", @"connectInstructions": @"connectInstructions", @"lastUpdate": @"lastUpdate", @"latestData": @"latestData", @"noDataYet": @"noDataYet" }];
}

@end
