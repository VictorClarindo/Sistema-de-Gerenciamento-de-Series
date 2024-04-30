#include "SysInfo.h"

const string SysInfo::author = "Ryan Pavini, Carlos Eduardo De Deus Costa, Rafael Rodrigues Galligani, Rafael Dos Santos Alves e Victor Clarindo Da Silva 255821";
const string SysInfo::date = "2024, March";
const string SysInfo::department = "Faculdade de Tecnologia - Limeira/SP";
const string SysInfo::institution = "Universidade Estadual de Campinas (Unicamp)";
const string SysInfo::systemName = "Sistema de Gerenciamento de Catálogo de Séries";
const string SysInfo::version = "0.01";
const string SysInfo::helpFile = "SGCSHelp.txt";

const string& SysInfo::getAuthor()
	{
	return author;
	}

const string& SysInfo::getDate()
	{
	return date;
	}

const string& SysInfo::getDepartment()
	{
	return department;
	}

const string& SysInfo::getInstitution()
	{
	return institution;
	}

const string& SysInfo::getSystemName()
	{
	return systemName;
	}

const string& SysInfo::getVersion()
	{
	return version;
	}

const string& SysInfo::getHelpFile()
	{
	return helpFile;
	}

const string SysInfo::getFullVersion()
	{
	return systemName + " | Ver. " + version + " (" + date + ")";
	}
