[MonD]
SkinName=mondtholomew
PreviewImage=https://repository-images.githubusercontent.com/523792040/c634e70f-884a-4412-863a-d66cd4e2f80f
Author=Reisir
Description=Mond but it work
ProfilePicture=https://avatars.githubusercontent.com/u/93496808

Measure=String
String=mondtholomew
IfMatch=#ROOTCONFIG#
IfMatchAction=[!DisableMeasure "MonD"]
IfNotMatchAction=[!WriteKeyValue "MonD" "String" "[#ROOTCONFIG]" "#@#Mond.inc"][!WriteKeyValue "MonD" "SkinName" "[#ROOTCONFIG]" "#@#Mond.inc"][!Refresh]
