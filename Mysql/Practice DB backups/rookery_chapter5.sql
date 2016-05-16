-- MySQL dump 10.16  Distrib 10.1.10-MariaDB, for Linux (x86_64)
--
-- Host: localhost    Database: rookery
-- ------------------------------------------------------
-- Server version	10.1.10-MariaDB-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `bird_families`
--

DROP TABLE IF EXISTS `bird_families`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `bird_families` (
  `family_id` int(11) NOT NULL AUTO_INCREMENT,
  `scientific_name` varchar(255) DEFAULT NULL,
  `brief_description` varchar(255) DEFAULT NULL,
  `order_id` int(11) DEFAULT NULL,
  PRIMARY KEY (`family_id`),
  UNIQUE KEY `scientific_name` (`scientific_name`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `bird_families`
--

LOCK TABLES `bird_families` WRITE;
/*!40000 ALTER TABLE `bird_families` DISABLE KEYS */;
/*!40000 ALTER TABLE `bird_families` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `bird_orders`
--

DROP TABLE IF EXISTS `bird_orders`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `bird_orders` (
  `order_id` int(11) NOT NULL AUTO_INCREMENT,
  `scientific_name` varchar(255) DEFAULT NULL,
  `brief_description` text,
  `order_image` blob,
  PRIMARY KEY (`order_id`),
  UNIQUE KEY `scientific_name` (`scientific_name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `bird_orders`
--

LOCK TABLES `bird_orders` WRITE;
/*!40000 ALTER TABLE `bird_orders` DISABLE KEYS */;
/*!40000 ALTER TABLE `bird_orders` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `birds`
--

DROP TABLE IF EXISTS `birds`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `birds` (
  `bird_id` int(11) NOT NULL AUTO_INCREMENT,
  `scientific_name` varchar(255) DEFAULT NULL,
  `common_name` varchar(255) DEFAULT NULL,
  `family_id` int(11) DEFAULT NULL,
  `conservation_status_id` int(11),
  `wing_id` char(2) DEFAULT NULL,
  `body_id` char(2) DEFAULT NULL,
  `bill_id` char(2) DEFAULT NULL,
  `description` text,
  PRIMARY KEY (`bird_id`),
  UNIQUE KEY `scientific_name` (`scientific_name`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `birds`
--

LOCK TABLES `birds` WRITE;
/*!40000 ALTER TABLE `birds` DISABLE KEYS */;
INSERT INTO `birds` VALUES (1,'Charadrius vociferus','Killdeer',NULL,7,NULL,NULL,NULL,NULL),(2,'Gavia immer','Great Northern Loon',NULL,7,NULL,NULL,NULL,NULL),(3,'Aix sponsa','Wood Duck',NULL,7,NULL,NULL,NULL,NULL),(4,'Chordeiles minor','Common Nighthawk',NULL,7,NULL,NULL,NULL,NULL),(5,'Sitta carolinensis','White-breasted Nuthatch',NULL,7,NULL,NULL,NULL,NULL),(6,'Apteryx mantelli','North Island Brown Kiwi',NULL,7,NULL,NULL,NULL,NULL);
/*!40000 ALTER TABLE `birds` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `birds_bill_shapes`
--

DROP TABLE IF EXISTS `birds_bill_shapes`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `birds_bill_shapes` (
  `bill_id` char(2) DEFAULT NULL,
  `bill_shape` char(25) DEFAULT NULL,
  `bill_example` blob,
  UNIQUE KEY `bill_id` (`bill_id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `birds_bill_shapes`
--

LOCK TABLES `birds_bill_shapes` WRITE;
/*!40000 ALTER TABLE `birds_bill_shapes` DISABLE KEYS */;
/*!40000 ALTER TABLE `birds_bill_shapes` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `birds_body_shapes`
--

DROP TABLE IF EXISTS `birds_body_shapes`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `birds_body_shapes` (
  `body_id` char(3) DEFAULT NULL,
  `body_shape` char(25) DEFAULT NULL,
  `body_example` blob,
  UNIQUE KEY `body_id` (`body_id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `birds_body_shapes`
--

LOCK TABLES `birds_body_shapes` WRITE;
/*!40000 ALTER TABLE `birds_body_shapes` DISABLE KEYS */;
/*!40000 ALTER TABLE `birds_body_shapes` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `birds_details`
--

DROP TABLE IF EXISTS `birds_details`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `birds_details` (
  `bird_id` int(11) NOT NULL DEFAULT '0',
  `bird_description` text,
  `migrate` int(11) DEFAULT NULL,
  `bird_feeder` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `birds_details`
--

LOCK TABLES `birds_details` WRITE;
/*!40000 ALTER TABLE `birds_details` DISABLE KEYS */;
INSERT INTO `birds_details` VALUES (1,NULL,NULL,NULL),(2,NULL,NULL,NULL),(3,NULL,NULL,NULL),(4,NULL,NULL,NULL),(5,NULL,NULL,NULL),(6,NULL,NULL,NULL);
/*!40000 ALTER TABLE `birds_details` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `birds_habitats`
--

DROP TABLE IF EXISTS `birds_habitats`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `birds_habitats` (
  `bird_id` int(11) DEFAULT NULL,
  `habitat_id` int(11) DEFAULT NULL,
  UNIQUE KEY `bird_habitat` (`bird_id`,`habitat_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `birds_habitats`
--

LOCK TABLES `birds_habitats` WRITE;
/*!40000 ALTER TABLE `birds_habitats` DISABLE KEYS */;
INSERT INTO `birds_habitats` VALUES (2,5),(3,5),(3,6);
/*!40000 ALTER TABLE `birds_habitats` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `birds_new`
--

DROP TABLE IF EXISTS `birds_new`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `birds_new` (
  `bird_id` int(11) NOT NULL AUTO_INCREMENT,
  `scientific_name` varchar(255) DEFAULT NULL,
  `common_name` varchar(50) DEFAULT NULL,
  `family_id` int(11) DEFAULT NULL,
  `description` text,
  PRIMARY KEY (`bird_id`),
  UNIQUE KEY `scientific_name` (`scientific_name`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `birds_new`
--

LOCK TABLES `birds_new` WRITE;
/*!40000 ALTER TABLE `birds_new` DISABLE KEYS */;
INSERT INTO `birds_new` VALUES (1,'Charadrius vociferus','Killdeer',NULL,NULL),(2,'Gavia immer','Great Northern Loon',NULL,NULL),(3,'Aix sponsa','Wood Duck',NULL,NULL),(4,'Chordeiles minor','Common Nighthawk',NULL,NULL),(5,'Sitta carolinensis','White-breasted Nuthatch',NULL,NULL),(6,'Apteryx mantelli','North Island Brown Kiwi',NULL,NULL);
/*!40000 ALTER TABLE `birds_new` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `birds_wing_shapes`
--

DROP TABLE IF EXISTS `birds_wing_shapes`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `birds_wing_shapes` (
  `wing_id` char(2) DEFAULT NULL,
  `wing_shape` char(25) DEFAULT NULL,
  `wing_example` blob,
  UNIQUE KEY `wing_id` (`wing_id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `birds_wing_shapes`
--

LOCK TABLES `birds_wing_shapes` WRITE;
/*!40000 ALTER TABLE `birds_wing_shapes` DISABLE KEYS */;
/*!40000 ALTER TABLE `birds_wing_shapes` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `conservation_status`
--

DROP TABLE IF EXISTS `conservation_status`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `conservation_status` (
  `conservation_id` int(11) NOT NULL AUTO_INCREMENT,
  `conservation_category` char(10) DEFAULT NULL,
  `conservation_state` char(25) DEFAULT NULL,
  PRIMARY KEY (`conservation_id`)
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `conservation_status`
--

LOCK TABLES `conservation_status` WRITE;
/*!40000 ALTER TABLE `conservation_status` DISABLE KEYS */;
INSERT INTO `conservation_status` VALUES (1,'Extinct','Extinct'),(2,'Extinct','Extinct in Wild'),(3,'Threatened','Critically Endangered'),(4,'Threatened','Endangered'),(5,'Threatened','Vulnerable'),(6,'Lower Risk','Conservation Dependent'),(7,'Lower Risk','Near Threatened'),(8,'Lower Risk','Least Concern');
/*!40000 ALTER TABLE `conservation_status` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `habitat_codes`
--

DROP TABLE IF EXISTS `habitat_codes`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `habitat_codes` (
  `habitat_id` int(11) NOT NULL AUTO_INCREMENT,
  `habitat` varchar(25) DEFAULT NULL,
  PRIMARY KEY (`habitat_id`)
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `habitat_codes`
--

LOCK TABLES `habitat_codes` WRITE;
/*!40000 ALTER TABLE `habitat_codes` DISABLE KEYS */;
INSERT INTO `habitat_codes` VALUES (1,'Coasts'),(2,'Deserts'),(3,'Forests'),(4,'Grasslands'),(5,'Lakes, Rivers, Ponds'),(6,'Marshes, Swamps'),(7,'Mountains'),(8,'Oceans'),(9,'Urban');
/*!40000 ALTER TABLE `habitat_codes` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2016-01-04 17:13:21
