[@bs.module "locale-code"]
external getCountryCode: string => string = "getCountryCode";
external getCountryName: string => string = "getCountryName";
external getLanguageCode: string => string = "getLanguageCode";
external getLanguageName: string => string = "getLanguageName";
external getLanguageNativeName: string => string = "getLanguageNativeName";
external getLanguages: array(string) => array(string) = "getLanguages";
external validate: string => bool = "validate";
external validateCountryCode: string => bool = "validateCountryCode";
external validateLanguageCode: string => bool = "validateLanguageCode";