#import "SWGUserTokenRequest.h"

@implementation SWGUserTokenRequest
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"user": @"user", @"organization_access_token": @"organization_access_token" }];
}

@end
