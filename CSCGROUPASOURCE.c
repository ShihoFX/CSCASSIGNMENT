#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Define structures for Patient and MedicalRecord
typedef struct {
int id;
char name[50];
char address[100];
char contact[15];
char medical_history[200];
} Patient;
typedef struct {
int patient_id;
char diagnosis[100];
char treatment[100];
char medications[200];
char lab_results[200];
} MedicalRecord;
// Function prototypes
void registerPatient();
void updatePatient();
void searchPatient();
void createMedicalRecord();
void updateMedicalRecord();
// Global variables
Patient patients[100];
MedicalRecord medicalRecords[100];
int patientCount = 0;
int recordCount = 0;
int main() {
int choice;
do {
printf("\nHospital Management System\n");
printf("1. Register new patient\n");
printf("2. Update patient information\n");
printf("3. Search for a patient\n");
printf("4. Create medical record\n");
printf("5. Update medical record\n");
printf("6. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch(choice) {
case 1:
registerPatient();
break;
case 2:
updatePatient();
break;
case 3:
searchPatient();
break;
case 4:
createMedicalRecord();
break;
case 5:
updateMedicalRecord();
break;
case 6:
printf("Exiting...\n");
break;
default:
printf("Invalid choice. Please try again.\n");
}
} while (choice != 6);
return 0;
}
void registerPatient() {
printf("\nRegister New Patient\n");
printf("Enter patient name: ");
scanf("%s", patients[patientCount].name);
printf("Enter patient address: ");
scanf("%s", patients[patientCount].address);
printf("Enter patient contact number: ");
scanf("%s", patients[patientCount].contact);
printf("Enter patient medical history: ");
scanf("%s", patients[patientCount].medical_history);
patients[patientCount].id = patientCount + 1;
patientCount++;
printf("Patient registered successfully.\n");
}
void updatePatient() {
int id;
printf("\nUpdate Patient Information\n");
printf("Enter patient ID: ");
scanf("%d", &id);
if (id > 0 && id <= patientCount) {
printf("Enter new address: ");
scanf("%s", patients[id - 1].address);
printf("Enter new contact number: ");
scanf("%s", patients[id - 1].contact);
printf("Patient information updated successfully.\n");
} else {
printf("Invalid patient ID.\n");
}
}
void searchPatient() {
char name[50];
printf("\nSearch for a Patient\n");
printf("Enter patient name: ");
scanf("%s", name);
for (int i = 0; i < patientCount; i++) {
if (strcmp(patients[i].name, name) == 0) {
printf("Patient ID: %d\n", patients[i].id);
printf("Name: %s\n", patients[i].name);
printf("Address: %s\n", patients[i].address);
printf("Contact: %s\n", patients[i].contact);
printf("Medical History: %s\n", patients[i].medical_history);
return;
}
}
printf("Patient not found.\n");
}
void createMedicalRecord() {
int patient_id;
printf("\nCreate Medical Record\n");
printf("Enter patient ID: ");
scanf("%d", &patient_id);
if (patient_id > 0 && patient_id <= patientCount) {
printf("Enter diagnosis: ");
scanf("%s", medicalRecords[recordCount].diagnosis);
printf("Enter treatment: ");
scanf("%s", medicalRecords[recordCount].treatment);
printf("Enter medications: ");
scanf("%s", medicalRecords[recordCount].medications);
printf("Enter lab results: ");
scanf("%s", medicalRecords[recordCount].lab_results);
medicalRecords[recordCount].patient_id = patient_id;
recordCount++;
printf("Medical record created successfully.\n");
} else {
printf("Invalid patient ID.\n");
}
}
void updateMedicalRecord() {
int patient_id;
printf("\nUpdate Medical Record\n");
printf("Enter patient ID: ");
scanf("%d", &patient_id);
if (patient_id > 0 && patient_id <= patientCount) {
for (int i = 0; i < recordCount; i++) {
if (medicalRecords[i].patient_id == patient_id) {
printf("Enter new diagnosis: ");
scanf("%s", medicalRecords[i].diagnosis);
printf("Enter new treatment: ");
scanf("%s", medicalRecords[i].treatment);
printf("Enter new medications: ");
scanf("%s", medicalRecords[i].medications);
printf("Enter new lab results: ");
scanf("%s", medicalRecords[i].lab_results);
printf("Medical record updated successfully.\n");
return;
}
}
printf("Medical record not found for this patient.\n");
} else {
printf("Invalid patient ID.\n");
}
}