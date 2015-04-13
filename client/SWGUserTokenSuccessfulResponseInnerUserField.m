#import "SWGUserTokenSuccessfulResponseInnerUserField.h"

@implementation SWGUserTokenSuccessfulResponseInnerUserField
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"access_token": @"access_token" }];
}

@end
