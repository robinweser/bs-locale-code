[@bs.module "locale-code"]
external getCountryCode: string => string = "getCountryCode";
[@bs.module "locale-code"]
external getCountryName: string => string = "getCountryName";
[@bs.module "locale-code"]
external getLanguageCode: string => string = "getLanguageCode";
[@bs.module "locale-code"]
external getLanguageName: string => string = "getLanguageName";
[@bs.module "locale-code"]
external getLanguageNativeName: string => string = "getLanguageNativeName";
[@bs.module "locale-code"]
external getLanguages: array(string) => array(string) = "getLanguages";

[@bs.module "locale-code"] external validate: string => bool = "validate";
[@bs.module "locale-code"]
external validateCountryCode: string => bool = "validateCountryCode";
[@bs.module "locale-code"]
external validateLanguageCode: string => bool = "validateLanguageCode";