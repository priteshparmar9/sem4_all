package controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.servlet.ModelAndView;

import Entity_classes.Customer;

@Controller
public class HomeController {
	@RequestMapping("")
	public ModelAndView home() {
		ModelAndView mv= new ModelAndView();
		mv.setViewName("index");
		return mv;
		
	}

}
