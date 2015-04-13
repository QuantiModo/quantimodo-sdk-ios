#import "SWGCorrelation.h"

@implementation SWGCorrelation
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"correlationCoefficient": @"correlationCoefficient", @"cause": @"cause", @"effect": @"effect", @"onsetDelay": @"onsetDelay", @"durationOfAction": @"durationOfAction", @"numberOfPairs": @"numberOfPairs", @"effectSize": @"effectSize", @"statisticalSignificance": @"statisticalSignificance", @"timestamp": @"timestamp", @"reverseCorrelation": @"reverseCorrelation", @"causalityFactor": @"causalityFactor", @"causeCategory": @"causeCategory", @"effectCategory": @"effectCategory" }];
}

@end
