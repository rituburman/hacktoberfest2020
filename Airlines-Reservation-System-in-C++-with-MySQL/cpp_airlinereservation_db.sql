-- phpMyAdmin SQL Dump
-- version 4.5.1
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Jul 29, 2017 at 05:36 PM
-- Server version: 10.1.19-MariaDB
-- PHP Version: 7.0.13
-- Airlines Reservation System - CodeWithC.com

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `cpp_airlinereservation_db`
--

-- --------------------------------------------------------

--
-- Table structure for table `flightdetails_tb`
--

CREATE TABLE `flightdetails_tb` (
  `f_id` int(11) NOT NULL,
  `f_no` varchar(50) NOT NULL DEFAULT '0',
  `f_name` varchar(50) NOT NULL DEFAULT '0',
  `f_from` varchar(50) NOT NULL DEFAULT '0',
  `f_destination` varchar(50) NOT NULL DEFAULT '0',
  `f_time` varchar(50) NOT NULL DEFAULT '0',
  `f_amount` varchar(50) NOT NULL DEFAULT '0',
  `f_leave` varchar(50) NOT NULL DEFAULT '0',
  `f_arrive` varchar(50) NOT NULL DEFAULT '0',
  `f_available` varchar(5) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `flightdetails_tb`
--

INSERT INTO `flightdetails_tb` (`f_id`, `f_no`, `f_name`, `f_from`, `f_destination`, `f_time`, `f_amount`, `f_leave`, `f_arrive`, `f_available`) VALUES
(1, 'PKR-108', 'JET AIRLINES', 'Lahore', 'Karachi', '1:30PM', '14000', '2:00 PM', '1:00 AM', 'A');

-- --------------------------------------------------------

--
-- Table structure for table `userreservation_tb`
--

CREATE TABLE `userreservation_tb` (
  `u_id` int(11) NOT NULL,
  `u_name` varchar(50) NOT NULL DEFAULT '0',
  `u_phone` varchar(50) NOT NULL DEFAULT '0',
  `u_passportno` varchar(50) NOT NULL DEFAULT '0',
  `u_ticket` varchar(50) NOT NULL DEFAULT '0',
  `u_flightno` varchar(50) NOT NULL DEFAULT '0',
  `u_address` varchar(50) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `userreservation_tb`
--

INSERT INTO `userreservation_tb` (`u_id`, `u_name`, `u_phone`, `u_passportno`, `u_ticket`, `u_flightno`, `u_address`) VALUES
(1, 'Nike Arora', '123123', '123123231', '#TIK-12321', 'PKR-108', 'KHULNA'),
(2, 'Kiara Khan', '78754654', '48848484848', '#TIK-774', 'RRK-345', 'Lahore');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `flightdetails_tb`
--
ALTER TABLE `flightdetails_tb`
  ADD PRIMARY KEY (`f_id`);

--
-- Indexes for table `userreservation_tb`
--
ALTER TABLE `userreservation_tb`
  ADD PRIMARY KEY (`u_id`);

--
-- AUTO_INCREMENT for dumped tables
-- Airlines Reservation System - CodeWithC.com

--
-- AUTO_INCREMENT for table `flightdetails_tb`
--
ALTER TABLE `flightdetails_tb`
  MODIFY `f_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
--
-- AUTO_INCREMENT for table `userreservation_tb`
--
ALTER TABLE `userreservation_tb`
  MODIFY `u_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
