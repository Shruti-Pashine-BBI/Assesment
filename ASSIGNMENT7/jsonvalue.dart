class JSONVALUE {
  dynamic userId,
      jobTitleName,
      firstName,
      lastName,
      preferredFullName,
      employeeCode,
      region,
      phoneNumber,
      emailAddress;

//  Demomodel({
//    this.userId,
//    this.jobTitleName,
//    this.firstName,
//    this.lastName,
//    this.preferredFullName,
//    this.employeeCode,
//    this.region,
//    this.phoneNumber,
//    this.emailAddress

//  }
// );

  JSONVALUE.fromJson(Map<String, dynamic> json) {
    userId = json['userId'];
    jobTitleName = json['jobTitleName'];
    firstName = json['firstName'];
    lastName = json['lastName'];
    preferredFullName = json['preferredFullName'];
    employeeCode = json['employeeCode'];
    region = json['region'];
    phoneNumber = json['phoneNumber'];
    emailAddress = json['emailAddress'];
  }

  Map<String, dynamic> toJson() {
    final Map<String, dynamic> data = {};
    data['userId'] = userId;
    data['jobTitleName'] = jobTitleName;
    data['firstName'] = firstName;
    data['lastName'] = lastName;
    data['preferredFullName'] = preferredFullName;
    data['employeeCode'] = employeeCode;
    data['region'] = region;
    data['phoneNumber'] = phoneNumber;
    data['emailAddress'] = emailAddress;
    return data;
  }
}

void main() {
  Map<String, dynamic> data = {
    "userId": "rirani",
    "jobTitleName": "Developer",
    "firstName": "Romin",
    "lastName": "Irani",
    "preferredFullName": "Romin Irani",
    "employeeCode": "E1",
    "region": "CA",
    "phoneNumber": "408-1234567",
    "emailAddress": "romin.k.irani@gmail.com"
  };

  JSONVALUE obj = JSONVALUE.fromJson(data);
  print(obj.toJson());
  //print(ob);
  print(obj.userId);
  print(obj.jobTitleName);
  print(obj.firstName);
//   print(obj.userId);
//   print(obj.userId);
//   print(obj.userId);
//  print(obj.userId);
//   print(obj.userId);
}
