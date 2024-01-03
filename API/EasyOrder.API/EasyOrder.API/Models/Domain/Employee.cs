﻿using System.ComponentModel.DataAnnotations;

namespace EasyOrder.API.Models.Domain
{
    public class Employee
    {
        [Key]
        public int Id { get; set; }
        public int WorkExperienceInHours { get; set; }
        public DateTime EmploymentDate { get; set; }
        public string Address { get; set; }
        public User User { get; set; }
        public City City { get; set; }
        public ICollection<Order> Orders { get; set; }
        public ICollection<EmployeeJobPosition> EmployeeJobPositions { get; set; }
        public ICollection<Bill> Bills { get; set; }
    }
}
